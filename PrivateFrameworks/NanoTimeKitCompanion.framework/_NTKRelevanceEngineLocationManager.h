/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager * _locationManager;
    struct NSString { Class x1; } * _token;
}

- (void).cxx_destruct;
- (id)currentLocation;
- (id)initWithLocationManager:(id)arg1;
- (void)startLocationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopLocationUpdates;

@end
