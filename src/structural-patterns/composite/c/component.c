#include "component.h"

G_DEFINE_ABSTRACT_TYPE(Component , component, G_TYPE_OBJECT);

void component_operation(Component *component){
    COMPONENT_GET_CLASS(component)->operation(component);
}

static void operation(){
    printf("operation...\n");
}

static void component_init( Component *component){}

static void component_class_init( ComponentClass *klass)
{
    klass->operation = operation;
}