
#include "FlatDecorator.h"

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

FlatDecorator::FlatDecorator(DesktopSettings& settings,
		BRect frame, Desktop* desktop)
{

}

FlatDecorator::~FlatDecorator()
{
}

void 
FlatDecorator::Draw(BRect updateRect)
{

}

void
FlatDecorator::Draw()
{
}

Region 
FlatDecorator::RegionAt(BPoint where, int32& tab)
{
}

bool 
FlatDecorator::SetRegionHighlight(Region region,
					uint8 highlight, BRegion* dirty,
					int32 tab = -1);
{
}
