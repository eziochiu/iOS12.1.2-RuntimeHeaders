/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAssociatedApp : PBCodable <NSCopying> {
    NSMutableArray * _alternateAppAdamIds;
    NSString * _preferredAppAdamId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *alternateAppAdamIds;
@property (nonatomic, readonly) bool hasPreferredAppAdamId;
@property (nonatomic, retain) NSString *preferredAppAdamId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)alternateAppAdamIdType;
+ (id)associatedAppForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addAlternateAppAdamId:(id)arg1;
- (id)alternateAppAdamIdAtIndex:(unsigned long long)arg1;
- (id)alternateAppAdamIds;
- (unsigned long long)alternateAppAdamIdsCount;
- (void)clearAlternateAppAdamIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreferredAppAdamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preferredAppAdamId;
- (bool)readFrom:(id)arg1;
- (void)setAlternateAppAdamIds:(id)arg1;
- (void)setPreferredAppAdamId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end