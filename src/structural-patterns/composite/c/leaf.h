#ifndef __LEAT_H_
#define __LEAT_H_

#include <glib-object.h>
#include "component.h"

typedef struct 
{
    Component component;
} Leaf;

typedef struct
{
    ComponentClass component_class;
} LeafClass;

#define TYPE_LEAF               (leaf_get_type())
#define LEAF(obj)               (G_TYPE_CHECK_INSTANCE_CAST((obj),             \
                                TYPE_LEAF, Leaf))

#define LEAF_CLASS(cls)         (G_TYPE_CHECK_CLASS_CAST((cls),                \
                                TYPE_LEAF, LeafClass))

#define LEAF_GET_CLASS(obj)     (G_TYPE_INSTANCE_GET_CLASS((obj),              \
                                TYPE_LEAF, LeafClass))

void        leaf_operation(Component *leaf);

GType       leaf_get_type(void);

#endif /*__LEAT_H_*/