/* Generated by EzioChiu.
 */

@protocol DNDSBackingStoreRecord <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(NSDictionary *)arg1;

@optional

+ (NSDictionary *)migrateDictionaryRepresentation:(NSDictionary *)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (NSArray *)migrateDictionaryRepresentations:(NSArray *)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;

@end
