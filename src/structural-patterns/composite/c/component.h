#ifndef __COMPONENT_H_
#define __COMPONENT_H_

#include <stdio.h>
#include <glib-object.h>

typedef struct 
{
    GObject parent;
} Component;

typedef struct 
{
    GObjectClass parent_class;

    void    (*operation) (Component *component);
} ComponentClass;

#define TYPE_COMPONENT          (component_get_type())
#define COMPONENT(obj)          (G_TYPE_CHECK_INSTANCE_CASE((obj),             \
                                TYPE_COMPONENT, Component))

#define COMPONENT_CLASS(cls)    (G_TYPE_CHECK_CLASS_CAST((cls),                \
                                TYPE_COMPONENT, ComponentClass))

#define COMPONENT_GET_CLASS(obj)(G_TYPE_INSTANCE_GET_CLASS((obj),              \
                                TYPE_COMPONENT, ComponentClass))

void            component_operation(Component *component);

GType           component_get_type(void);

#endif /* __COMPONENT_H_ */