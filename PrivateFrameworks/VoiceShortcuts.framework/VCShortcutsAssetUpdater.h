/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCShortcutsAssetUpdater : NSObject {
    VCUserDefaults * _defaults;
}

@property (nonatomic, readonly) VCUserDefaults *defaults;

+ (void)scheduleAssetUpdate;
+ (bool)updateAsset;

- (void).cxx_destruct;
- (id)defaults;
- (bool)downloadAsset:(id)arg1;
- (bool)downloadAssetCatalog;
- (id)fetchLatestAsset;
- (id)init;
- (bool)updateAsset;
- (bool)updateVoiceShortcutsBlacklistWithAsset:(id)arg1;

@end
