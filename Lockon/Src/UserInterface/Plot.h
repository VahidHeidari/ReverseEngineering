#ifndef PLOT_H_
#define PLOT_H_

class Plot
{
public: __thiscall Plot::Plot(class Plot const &)
public: __thiscall Plot::Plot(int,float,float,float,float)
public: __thiscall Plot::Plot(struct PlotParameters const &)
public: virtual __thiscall Plot::~Plot(void)
public: class Plot & __thiscall Plot::operator=(class Plot const &)
public: float __thiscall Plot::rescaleX(float)
public: float __thiscall Plot::rescaleY(float)
public: int __thiscall Plot::getSize(void)const 
public: virtual void __thiscall Plot::shift(float,float)
public: void __thiscall Plot::addPoint(class TPoint<float> const &)
public: void __thiscall Plot::addPoints(class std::vector<class TPoint<float>,class std::allocator<class TPoint<float> > > const &)
public: void __thiscall Plot::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Plot::arrange(struct PlotParameters const &)
public: void __thiscall Plot::clean(void)
public: void __thiscall Plot::clear(void)
public: void __thiscall Plot::deletePoints(int,int)
public: void __thiscall Plot::setLinesColor(unsigned int)
public: void __thiscall Plot::setPoint(int,class TPoint<float> const &)
public: void __thiscall Plot::setPointsColor(unsigned int,int,int)
public: void __thiscall Plot::setRangeX(float,float)
public: void __thiscall Plot::setRangeY(float,float)
public: void __thiscall Plot::setRenderMode(int)
Protected: virtual void __thiscall Plot::updateSelfPaintCoordinates(void)
protected: virtual struct MSGTABLE const * __thiscall Plot::getMessageTable(void)const 
protected: virtual void __thiscall Plot::inflateSelf(void)
protected: virtual void __thiscall Plot::onMove(int,int)
protected: virtual void __thiscall Plot::onPaint(void)
protected: void __thiscall Plot::calculateDrawPoints(int,int)
protected: void __thiscall Plot::calculateIndices(int,int)
protected: void __thiscall Plot::calculatePlot(int,int)
protected: void __thiscall Plot::init(void)
private: void __thiscall Plot::thisArrange(struct PlotParameters const &)
public: void __thiscall Plot::`vbase destructor'(void)
const Plot::`vbtable'
const Plot::`vftable'{for `Control'}
const Plot::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const Plot::messageTable
private: static struct MSGTABLE_ENTRY const * const Plot::messageEntries
};

#endif
