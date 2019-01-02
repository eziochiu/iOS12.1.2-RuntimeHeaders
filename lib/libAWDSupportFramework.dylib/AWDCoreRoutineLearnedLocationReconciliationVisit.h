/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLearnedLocationReconciliationVisit : PBCodable <NSCopying> {
    NSMutableArray * _alternativeVisits;
    int  _datapointCount;
    int  _deviceClass;
    bool  _didUnlock;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int datapointCount : 1; 
        unsigned int deviceClass : 1; 
        unsigned int percentageTransitions : 1; 
        unsigned int percentageVisits : 1; 
        unsigned int placeLabelType : 1; 
        unsigned int placeType : 1; 
        unsigned int didUnlock : 1; 
        unsigned int newPlace : 1; 
        unsigned int placeAOIPOI : 1; 
        unsigned int watchPresent : 1; 
    }  _has;
    bool  _newPlace;
    int  _percentageTransitions;
    int  _percentageVisits;
    bool  _placeAOIPOI;
    int  _placeLabelType;
    int  _placeType;
    unsigned long long  _timestamp;
    bool  _watchPresent;
}

@property (nonatomic, retain) NSMutableArray *alternativeVisits;
@property (nonatomic) int datapointCount;
@property (nonatomic) int deviceClass;
@property (nonatomic) bool didUnlock;
@property (nonatomic) bool hasDatapointCount;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasDidUnlock;
@property (nonatomic) bool hasNewPlace;
@property (nonatomic) bool hasPercentageTransitions;
@property (nonatomic) bool hasPercentageVisits;
@property (nonatomic) bool hasPlaceAOIPOI;
@property (nonatomic) bool hasPlaceLabelType;
@property (nonatomic) bool hasPlaceType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWatchPresent;
@property (nonatomic) bool newPlace;
@property (nonatomic) int percentageTransitions;
@property (nonatomic) int percentageVisits;
@property (nonatomic) bool placeAOIPOI;
@property (nonatomic) int placeLabelType;
@property (nonatomic) int placeType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool watchPresent;

+ (Class)alternativeVisitsType;

- (void)addAlternativeVisits:(id)arg1;
- (id)alternativeVisits;
- (id)alternativeVisitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativeVisitsCount;
- (void)clearAlternativeVisits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)datapointCount;
- (void)dealloc;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (bool)didUnlock;
- (bool)hasDatapointCount;
- (bool)hasDeviceClass;
- (bool)hasDidUnlock;
- (bool)hasNewPlace;
- (bool)hasPercentageTransitions;
- (bool)hasPercentageVisits;
- (bool)hasPlaceAOIPOI;
- (bool)hasPlaceLabelType;
- (bool)hasPlaceType;
- (bool)hasTimestamp;
- (bool)hasWatchPresent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)newPlace;
- (int)percentageTransitions;
- (int)percentageVisits;
- (bool)placeAOIPOI;
- (int)placeLabelType;
- (int)placeType;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeVisits:(id)arg1;
- (void)setDatapointCount:(int)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDidUnlock:(bool)arg1;
- (void)setHasDatapointCount:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasDidUnlock:(bool)arg1;
- (void)setHasNewPlace:(bool)arg1;
- (void)setHasPercentageTransitions:(bool)arg1;
- (void)setHasPercentageVisits:(bool)arg1;
- (void)setHasPlaceAOIPOI:(bool)arg1;
- (void)setHasPlaceLabelType:(bool)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWatchPresent:(bool)arg1;
- (void)setNewPlace:(bool)arg1;
- (void)setPercentageTransitions:(int)arg1;
- (void)setPercentageVisits:(int)arg1;
- (void)setPlaceAOIPOI:(bool)arg1;
- (void)setPlaceLabelType:(int)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWatchPresent:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)watchPresent;
- (void)writeTo:(id)arg1;

@end