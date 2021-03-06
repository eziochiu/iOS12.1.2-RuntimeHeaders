/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPReplicaMergeOptions> {
    bool  _deserializationAllowed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeserializationAllowed, readonly) bool deserializationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithDeserializationAllowed:(bool)arg1;
- (bool)isDeserializationAllowed;

@end
