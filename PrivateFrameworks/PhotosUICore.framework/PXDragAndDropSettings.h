/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDragAndDropSettings : PXSettings {
    bool  _alwaysAllowDragsWithinUserAlbums;
    bool  _dragOutEnabled;
    long long  _reorderCadence;
    bool  _springLoadingEnabled;
    bool  _useData;
    bool  _useFileProvider;
}

@property (nonatomic) bool alwaysAllowDragsWithinUserAlbums;
@property (nonatomic) bool dragOutEnabled;
@property (nonatomic) long long reorderCadence;
@property (nonatomic) bool springLoadingEnabled;
@property (nonatomic) bool useData;
@property (nonatomic) bool useFileProvider;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)alwaysAllowDragsWithinUserAlbums;
- (bool)dragOutEnabled;
- (id)parentSettings;
- (long long)reorderCadence;
- (void)setAlwaysAllowDragsWithinUserAlbums:(bool)arg1;
- (void)setDefaultValues;
- (void)setDragOutEnabled:(bool)arg1;
- (void)setReorderCadence:(long long)arg1;
- (void)setSpringLoadingEnabled:(bool)arg1;
- (void)setUseData:(bool)arg1;
- (void)setUseFileProvider:(bool)arg1;
- (bool)springLoadingEnabled;
- (bool)useData;
- (bool)useFileProvider;

@end