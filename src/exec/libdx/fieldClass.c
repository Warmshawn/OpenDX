/*
 * Automatically generated - DO NOT EDIT!
 */

#ifndef __objectClass
#define __objectClass
/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/

/*
\section{Object class}

Every object begins with an object preamble, which contains the class
number and a reference count.
*/

#include <dx/dx.h>

/* the following make ANSI compilers happier */
struct shade;
struct buffer;
struct tile;
struct gather;
struct survey;
struct count;

struct _root {
    int size;
    Class class;
    char *name;
};
#define CLASS_SIZE(x) (((struct _root *)(x))->size)
#define CLASS_CLASS(x) (((struct _root *)(x))->class)
#define CLASS_NAME(x) (((struct _root *)(x))->name)


extern struct object_class _dxdobject_class;
Error _dxfDelete(Object);
Error _dxfno_Delete(Object);
Error _dxfShade(Object, struct shade *);
Error _dxfno_Shade(Object, struct shade *);
Object _dxfBoundingBox(Object, Point*, Matrix*, int);
Object _dxfno_BoundingBox(Object, Point*, Matrix*, int);
Object _dxfPaint(Object, struct buffer *, int, struct tile *);
Object _dxfno_Paint(Object, struct buffer *, int, struct tile *);
Object _dxfGather(Object, struct gather *, struct tile *);
Object _dxfno_Gather(Object, struct gather *, struct tile *);
Error _dxfPartition(Object, int*, int, Object*, int);
Error _dxfno_Partition(Object, int*, int, Object*, int);
Object _dxfGetType(Object, Type*, Category*, int*, int*);
Object _dxfno_GetType(Object, Type*, Category*, int*, int*);
Object _dxfCopy(Object, enum _dxd_copy);
Object _dxfno_Copy(Object, enum _dxd_copy);
Error _dxfObject_Delete(Object);
Object _dxfObject_BoundingBox(Object, Point*, Matrix*, int);
Error _dxfObject_Shade(Object, struct shade *);

#define NATTRIBUTES 2			/* number of attributes in object */

struct object {				/* object preamble */
    struct object_class *class;		/* class vector */
    Class class_id;			/* class id (for debugging only!) */
    lock_type lock;			/* for Reference and Delete */
    int count;				/* reference count */
    int tag;				/* object tag */
    struct attribute {			/* object attributes */
	char *name;			/* attribute name */
	Object value;			/* attribue value */
    } local[NATTRIBUTES], *attributes;	/* the attributes */
    int nattributes;			/* number of attributes */
    int attr_alloc;			/* allocated space for attributes */
};

#if 0 /* was if OPTIMIZED */
#define CHECK(obj, cls) { \
    if (!obj) \
	return ERROR; \
}
#else
#define CHECK(obj, cls) { \
    if (!obj) \
        return ERROR; \
    if (DXGetObjectClass((Object)(obj)) != cls) \
        DXErrorReturn(ERROR_BAD_CLASS, "called with object of wrong class"); \
}
#endif
/**
This macro eases the task of checking argument class.  Note: This is not needed
when a method implementation is called, because {\tt o} and its class will
both have been checked by the method.
**/

Object _dxf_NewObject(struct object_class *class);
/**
This internal routine is called only by other {\tt New...} routines to
create and initialize the object preamble.
**/

Object _dxf_CopyObject(Object new, Object old, enum _dxd_copy copy);
/**
Copies the portion of the data of {\tt old} managed by the {\tt
Object} class to {\tt new}.  This is provided for subclasses of {\tt Object}
to use in their copy routines.  Copying works something like creating
an object.  Every class {\tt X} that implements copying should provide
an {\tt \_CopyX} routine that copies relevant data from an old object
to a new object, so that subclass copy routines may call this routine
to copy the superclass's data.  The {\tt CopyX} routine just creates a
new object of the appropriate type and then calls {\tt \_CopyX} to copy
the data.
**/
#endif
#ifndef __fieldClass
#define __fieldClass
/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/

/*
\section{Field class}
*/


extern struct field_class _dxdfield_class;
Object _dxfField_Copy(Field, enum _dxd_copy);
Object _dxfField_GetType(Field, Type*, Category*, int*, int*);
Error _dxfField_Delete(Field);
Object _dxfField_BoundingBox(Field, Point*, Matrix*, int);
Object _dxfField_Gather(Field, struct gather *, struct tile *);
Object _dxfField_Paint(Field, struct buffer *, int, struct tile *);
Error _dxfField_Shade(Field, struct shade *);
Error _dxfField_Partition(Field, int*, int, Object*, int);

#define NCOMPONENTS 8

struct field {

    struct object object;		/* object preamble */

    /* the component/attribute table */
    struct component {			/* the components */
	char *name;			/* component name */
	Object value;			/* component value */
    } local[NCOMPONENTS], *components;	/* the components */
    int ncomponents;			/* number of components */
    int comp_alloc;			/* allocated space for components */

    /* helper stuff */
    int cell;				/* whether we'r in a cell or not */
    PointId *pts;			/* the points in current face */
    int npts;				/* number of pts in current face */
    int pts_alloc;			/* allocated size of pts array */
    struct hash {			/* hash table to eliminate dup faces */
	Triangle tri;			/* the triangle */
	int count;			/* multiplicity */
    } *hash;
    int nsurface, ninner;		/* counts in hash table */
    int hash_alloc;			/* allocate size of hash table */
};



#endif

struct object_class {
    struct _root root;
    Class class;
    char *name;
    Error (*Delete)();
    Error (*Shade)();
    Object (*BoundingBox)();
    Object (*Paint)();
    Object (*Gather)();
    Error (*Partition)();
    Object (*GetType)();
    Object (*Copy)();
};

struct field_class {
    struct object_class super;
    Class class;
    char *name;
};

struct field_class _dxdfield_class = {
    sizeof(struct field),
    CLASS_FIELD,
    "field",
    CLASS_FIELD,
    "field",
    _dxfField_Delete,
    _dxfField_Shade,
    _dxfField_BoundingBox,
    _dxfField_Paint,
    _dxfField_Gather,
    _dxfField_Partition,
    _dxfField_GetType,
    _dxfField_Copy,
    CLASS_FIELD,
    "field",
};

Class DXGetFieldClass(Field o) {
    return o? (*(struct field_class **)o)->class: CLASS_MIN;
}
