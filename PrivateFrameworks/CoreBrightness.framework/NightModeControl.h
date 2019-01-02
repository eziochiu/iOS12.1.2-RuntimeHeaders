/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface NightModeControl : NSObject {
    struct BLRAggdInfo { 
        float manualModeTime; 
        float sunModeTime; 
        float scheduleModeTime; 
        int turnOnForNowCount; 
        int turnOffForNowCount; 
        int turnOnUntilTomorrowCount; 
        int turnOffUntilTomorrowCount; 
        double _aggdModeChangeTimestamp; 
    }  _aggdKeysInfo;
    NSObject<OS_dispatch_source> * _aggdUpdateTimer;
    int  _algoState;
    struct { 
        struct { 
            int hour; 
            int minute; 
        } fromTime; 
        struct { 
            int hour; 
            int minute; 
        } toTime; 
    }  _backupSchedule;
    id /* block */  _callbackBlock;
    bool  _checkInactivity;
    int  _currentScheduledTransitionType;
    NSString * _currentSunriseKey;
    NSString * _currentSunsetKey;
    struct __CFTimeZone { } * _currentTimeZone;
    bool  _displayOff;
    double  _displayOffTimestamp;
    struct __CFUserNotification { } * _enableNotification;
    struct NMFactorState { 
        double rampStartTime; 
        float factor; 
        float target; 
        float start; 
        float rampLength; 
    }  _factorState;
    float  _inactivityTimeout;
    bool  _isDaylight;
    NSString * _isDaylightKey;
    int  _logLevel;
    float  _maxFactor;
    float  _minFactor;
    NSString * _nextSunriseKey;
    NSString * _nextSunsetKey;
    NSObject<OS_dispatch_source> * _nextTransitionTimer;
    bool  _notificationInProgress;
    int  _notifyUserAboutScheduleCounter;
    double  _offTransitionTimeAbsoluteUnrestricted;
    double  _offTransitionTimeAbsoluteUnrestrictedPrev;
    NSString * _previousSunriseKey;
    NSString * _previousSunsetKey;
    NSMutableDictionary * _properties;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _revertToSunriseSunset;
    struct { 
        bool active; 
        bool enabled; 
        bool sunSchedulePermitted; 
        int mode; 
        struct { 
            struct { 
                int hour; 
                int minute; 
            } fromTime; 
            struct { 
                int hour; 
                int minute; 
            } toTime; 
        } schedule; 
        unsigned long long disableFlags; 
    }  _status;
    bool  _statusUpdated;
    double  _sunriseAbsolute;
    double  _sunrisePreviousAbsolute;
    NSDictionary * _sunriseSunsetInfo;
    int  _sunriseSunsetInfoQueryTimeout;
    SunriseSunsetProvider * _sunriseSunsetProvider;
    double  _sunsetAbsolute;
    double  _sunsetPreviousAbsolute;
    <NightShiftSupportProtocol> * _supportObj;
    float  _transitionLength;
    float  _transitionLengthActual;
    float  _transitionRate;
    NSObject<OS_dispatch_source> * _transitionTimer;
    bool  _transitionTimesValid;
    float  _transitionsTimesCoeff;
    double  _untilNexTransitionTimestamp;
}

- (void)aggdKeysUpdate;
- (void)cancelAggdPeriodicUpdate;
- (void)cancelSchedule;
- (void)cancelTransition;
- (void)clockChanged;
- (id)copyDictionaryFromStatus:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg1;
- (id)copyLowPowerModeState;
- (id)copyStatusDictionaryFromPrefs;
- (id)copyTimeStringWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3;
- (void)dealloc;
- (void)displayAlertInteractive:(bool)arg1;
- (void)enableBlueLightReduction:(bool)arg1 withOption:(int)arg2;
- (id)getPropertyForKey:(id)arg1;
- (id)initWithSupportObject:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)initiateFullMaxTransition;
- (void)initiateFullMinTransition;
- (void)initiateRestrictedMaxTransition;
- (void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2;
- (bool)parseStatusDictionary:(id)arg1 intoStruct:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg2 shouldUpdatePrefs:(bool*)arg3;
- (void)reevaluateCurrentState;
- (void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1;
- (void)retrieveSunriseSunsetTimesFromBackup:(double)arg1;
- (void)saveStatusToPrefs:(id)arg1;
- (void)scheduleAggdKeysUpdate;
- (void)scheduleNextTransition:(double)arg1 withType:(int)arg2;
- (void)setAlgoState:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setNightModeFactor:(float)arg1;
- (void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSchedule:(id)arg1;
- (void)setSunPermitted:(bool)arg1;
- (void)tearDownAllTimers;
- (void)timeZoneChanged;
- (void)transitionTimerHandler;
- (void)updateLowPowerModeState:(id)arg1;
- (void)updateOptionTimestamp:(double)arg1;
- (void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2;
- (void)updateSunriseSunsetBackup;
- (void)updateSunriseSunsetInfo:(id)arg1;
- (void)updateTransitionTimes:(double)arg1;
- (bool)updateTransitionTimesFromSchedule:(double)arg1;
- (bool)updateTransitionTimesFromSunriseSunset:(double)arg1;

@end