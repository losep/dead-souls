#include <lib.h>
#include <armor_types.h>
#include <damage_types.h>
inherit LIB_ARMOR;

protected void create(){
    armor::create();
    SetKeyName("gold ring");
    SetId(({"ring","gold ring"}));
    SetAdjectives( ({"beautiful"}) );
    SetShort("a beautiful gold ring");
    SetLong("This is a simple but beautiful ring made of "+
            "gold, suitable for wearing on one's finger.");
    SetMass(1);
    SetBaseCost("silver",500);
    SetArmorType(A_RING);
}

void init(){
    ::init();
}
