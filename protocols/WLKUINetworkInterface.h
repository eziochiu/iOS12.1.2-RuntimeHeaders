/* Generated by EzioChiu.
 */

@protocol WLKUINetworkInterface <JSExport>

@required

- (void)cancelRequest:(NSString *)arg1;
- (void)fetchConfiguration:(bool)arg1 :(JSValue *)arg2;
- (void)invalidateConfiguration;
- (JSValue *)makeRequest:(NSDictionary *)arg1 :(JSValue *)arg2;

@end
