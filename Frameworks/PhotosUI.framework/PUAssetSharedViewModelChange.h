/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetSharedViewModelChange : PUViewModelChange {
    bool  _loadingStatusChanged;
    bool  _saveProgressChanged;
    bool  _saveStateChanged;
}

@property (nonatomic) bool loadingStatusChanged;
@property (nonatomic) bool saveProgressChanged;
@property (nonatomic) bool saveStateChanged;

- (bool)hasChanges;
- (bool)loadingStatusChanged;
- (bool)saveProgressChanged;
- (bool)saveStateChanged;
- (void)setLoadingStatusChanged:(bool)arg1;
- (void)setSaveProgressChanged:(bool)arg1;
- (void)setSaveStateChanged:(bool)arg1;

@end