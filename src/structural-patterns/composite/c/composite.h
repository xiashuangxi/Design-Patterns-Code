#ifndef __COMPOSITE_H_
#define __COMPOSITE_H_

#include <glib-object.h>
#include "component.h"

typedef struct 
{
    Component component;
} Composite;

typedef struct
{
    ComponentClass component_class;

    void (*add)     (Composite *composite, Component *component);
    void (*remove)  (Composite *composite, Component *component);
} CompositeClass;

#define TYPE_COMPOSITE          (composite_get_type())
#define COMPOSITE(obj)          (G_TYPE_CHECK_INSTANCE_CAST((obj),             \
                                TYPE_COMPOSITE, Composite))

#define COMPOSITE_CLASS(cls)    (G_TYPE_CHECK_CLASS_CAST((cls),                \
                                TYPE_COMPOSITE, CompositeClass))

#define COMPOSITE_GET_CLASS(obj)(G_TYPE_INSTANCE_GET_CLASS((obj),              \
                                TYPE_COMPOSITE, CompositeClass))

GType           composite_get_type(void);

#endif /* __COMPOSITE_H_ */