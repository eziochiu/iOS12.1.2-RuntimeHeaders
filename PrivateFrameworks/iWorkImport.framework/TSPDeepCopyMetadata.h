/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyMetadata : TSPObject {
    NSDictionary * _cachedDataMap;
    TSPComponentObjectUUIDMap * _componentObjectUUIDMap;
    long long  _rootObjectIdentifier;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSDictionary *cachedDataMap;
@property (nonatomic, readonly) TSPComponentObjectUUIDMap *componentObjectUUIDMap;
@property (nonatomic, readonly) long long rootObjectIdentifier;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)cachedDataMap;
- (id)componentObjectUUIDMap;
- (id)initWithContext:(id)arg1;
- (id)initWithRootObject:(id)arg1 version:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3 cachedDataMap:(id)arg4;
- (void)loadFromUnarchiver:(id)arg1;
- (long long)rootObjectIdentifier;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)version;

@end