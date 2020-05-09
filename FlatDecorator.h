
#ifndef FLAT_DECORATOR_H
#define FLAT_DECORATOR_H

#include "DecorManager.h"
#include "SATDecorator.h"

class FlatDecorAddOn : public DecorAddOn
{
public:
	FlatDecorAddOn(image_id id, const char* name);

protected:
	virtual	Decorator*	_AllocateDecorator(DesktopSettings& settings,
							BRect rect, Desktop* desktop);
};

class FlatDecorator : public SATDecorator
{
public:
	FlatDecorator(DesktopSettings& settings,
		BRect frame, Desktop* desktop);
	virtual ~FlatDecorator();

	virtual	void Draw(BRect updateRect);
	virtual	void Draw();

	virtual	Region RegionAt(BPoint where, int32& tab) const;

	virtual	bool SetRegionHighlight(Region region,
					uint8 highlight, BRegion* dirty,
					int32 tab = -1);

protected:
};

#endif
