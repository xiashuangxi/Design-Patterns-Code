#ifndef __DEFAULT_COMPOSITE_H_
#define __DEFAULT_COMPOSITE_H_

#include <glib-object.h>

#include "composite.h"

typedef struct
{
    Composite   composite;

    GSList      *children;
} DefaultComposite;

typedef struct 
{
    CompositeClass composite_class;
} DefaultCompositeClass;

#define TYPE_DEFAULT_COMPOSITE          (default_composite_get_type())
#define DEFAULT_COMPOSITE(obj)          (G_TYPE_CHECK_INSTANCE_CAST((obj),     \
                                        TYPE_DEFAULT_COMPOSITE,                \
                                        DefaultComposite))

#define DEFAULT_COMPOSITE_GET_CLASS(obj)(G_TYPE_INSTANCE_GET_CLASS((obj),      \
                                        TYPE_DEFAULT_COMPOSITE,                \
                                        DefaultCompositeClass))


void            default_composite_add(DefaultComposite *default_composite,                    
                                      Component *component );

void            default_composite_remove(DefaultComposite *default_composite, 
                                         Component *component);

void            default_composite_operation(DefaultComposite *component);

GType           default_composite_get_type(void);

#endif /* __DEFAULT_COMPOSITE_H_ */