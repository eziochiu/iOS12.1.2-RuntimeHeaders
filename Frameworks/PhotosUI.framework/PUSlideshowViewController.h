/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewController : UIViewController <OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUSlideshowDisplayContext, PUSlideshowSettingsViewControllerDelegate, PUSlideshowViewModelChangeObserver, PUViewControllerSpecChangeObserver, UIGestureRecognizerDelegate> {
    bool  __needsUpdateSpec;
    PUSlideshowViewController * __secondScreenBrowser;
    PHPlaceholderView * __slideshowPlaceholderView;
    UIViewController * __slideshowSettingsViewController;
    OKPresentationViewController * _currentPresentationController;
    <PUSlideshowViewControllerDelegate> * _delegate;
    unsigned long long  _mode;
    unsigned long long  _playerStateButtonItemIndex;
    PUSlideshowSession * _session;
    PUSlideshowViewControllerSpec * _spec;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (setter=_setSecondScreenBrowser:, nonatomic, retain) PUSlideshowViewController *_secondScreenBrowser;
@property (setter=_setSlideshowPlaceHolderView:, nonatomic, retain) PHPlaceholderView *_slideshowPlaceholderView;
@property (setter=_setSlideshowSettingsViewController:, nonatomic, retain) UIViewController *_slideshowSettingsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) PUSlideshowSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_dismissSlideshow;
- (void)_doneButtonTapped:(id)arg1;
- (void)_handleAppWillResignActiveNotification:(id)arg1;
- (void)_handleStateChange;
- (void)_installPresentationController:(id)arg1;
- (void)_invalidateSpec;
- (bool)_needsUpdate;
- (bool)_needsUpdateSpec;
- (void)_playerStateButtonTapped:(id)arg1;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (id)_secondScreenBrowser;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setSecondScreenBrowser:(id)arg1;
- (void)_setSlideshowPlaceHolderView:(id)arg1;
- (void)_setSlideshowSettingsViewController:(id)arg1;
- (void)_settingsButtonTapped:(id)arg1;
- (void)_setupChromeBar;
- (void)_setupTapGesture;
- (id)_slideshowPlaceholderView;
- (id)_slideshowSettingsViewController;
- (void)_tapGesture:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updateChromeVisibility;
- (void)_updateIfNeeded;
- (void)_updatePlaceholder;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)_updateSpecIfNeeded;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)ancestorViewOfInstance:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)couchPotatoPlaybackFinished;
- (void)dealloc;
- (id)delegate;
- (void)finishSession;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;
- (void)loadView;
- (unsigned long long)mode;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)settingsDidFinished:(id)arg1;
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibleAssets;

@end