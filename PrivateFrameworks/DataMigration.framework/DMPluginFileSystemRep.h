/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMPluginFileSystemRep : NSObject {
    NSBundle * _bundle;
    NSString * _bundleIdentifier;
    NSString * _name;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

+ (id)allReps;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithName:(id)arg1 atEnclosingPath:(id)arg2;
- (bool)isBundleValid;
- (id)name;
- (id)path;

@end