/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPictureItemContainerViewController : UIViewController <MKPlacePhotosViewDelegate, UIScrollViewDelegate> {
    <MKPictureItemContainerAnalyticsDelegate> * _analyticsDelegate;
    GEOMapItemAttribution * _attribution;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    <GEOPictureItemContainer> * _pictureItemContainer;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
}

@property (nonatomic) <MKPictureItemContainerAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (nonatomic) struct CGPoint { double x1; double x2; } beginAnalyticsScrollingPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOPictureItemContainer> *pictureItemContainer;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsDelegate;
- (id)attribution;
- (struct CGPoint { double x1; double x2; })beginAnalyticsScrollingPoint;
- (void)didTapOnPictureItemView:(id)arg1;
- (void)downloadImageForVisiblePictureItemViews;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;
- (id)pictureItemContainer;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setBeginAnalyticsScrollingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visiblePictureItemViews;

@end