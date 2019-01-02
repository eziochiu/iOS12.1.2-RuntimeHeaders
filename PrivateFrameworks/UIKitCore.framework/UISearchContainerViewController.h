/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchContainerViewController : UIViewController {
    UISearchController * _searchController;
}

@property (nonatomic, retain) UISearchController *searchController;

- (void).cxx_destruct;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_presentSearchControllerIfNecessary;
- (bool)_transitionsChildViewControllers;
- (void)_updateSearchControllerIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end