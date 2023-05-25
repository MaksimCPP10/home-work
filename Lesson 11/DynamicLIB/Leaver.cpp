#include "Leaver.h"

DYNAMICLIB_API std::string Leaver::leave(std::string name)
{
    UserName = name;
    return "\nДо свидания, " + UserName + "!\n";
}
