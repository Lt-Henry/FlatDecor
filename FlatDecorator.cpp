
#include "FlatDecorator.hpp"

FlatDecorAddOn::FlatDecorAddOn(image_id id, const char* name)
	:
	DecorAddOn(id, name)
{
}

Decorator*
FlatDecorAddOn::_AllocateDecorator(DesktopSettings& settings, BRect rect,
	Desktop* desktop)
{
	return new (std::nothrow)FlatDecorator(settings, rect, desktop);
}
