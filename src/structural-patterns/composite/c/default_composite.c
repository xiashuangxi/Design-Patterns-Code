#include "default_composite.h"

G_DEFINE_TYPE(DefaultComposite , default_composite, TYPE_COMPOSITE);

void default_composite_add(DefaultComposite *default_composite, Component *component)
{
    printf("default_composite_add\n");
    Composite *composite = &default_composite->composite;
    COMPOSITE_GET_CLASS(composite)->add(composite, component);
    // g_object_unref(composite);
}

void default_composite_remove(DefaultComposite *default_composite, Component *component)
{
    
}

void default_composite_operation(DefaultComposite *default_composite)
{
    Component *component = (Component *)default_composite;
    COMPONENT_GET_CLASS(component)->operation(component);

}

static void add(Composite *composite, Component *component){
    printf("add\n");
    DefaultComposite *def_composite = (DefaultComposite *) composite;
    def_composite->children = g_slist_append( def_composite->children, component);
    printf("add end , childrens: %d\n", g_slist_length(def_composite->children));
}

static void operation(Component *component)
{
    printf("operation\n");
    DefaultComposite *def_composite = (DefaultComposite *) component;
    GSList *iterator = NULL;

    for ( iterator = def_composite->children ; iterator ; iterator = iterator->next)
    {
        Component *cpn  =(Component *) (iterator->data);
        COMPONENT_GET_CLASS(cpn )->operation(cpn);
    }
}

static void remove_read(Composite *composite, Component *component){
    
}

static void default_composite_init(DefaultComposite *defcomposite)
{
    printf("default_composite_init\n");
}

static void default_composite_class_init(DefaultCompositeClass *klass)
{
    printf("default_composite_class_init\n");
    ComponentClass *component = COMPONENT_CLASS(klass);    
    CompositeClass *composite = COMPOSITE_CLASS(klass);

    composite->add = add;
    composite->remove = remove_read;
    component->operation = operation;
}