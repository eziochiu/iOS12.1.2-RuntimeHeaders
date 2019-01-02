/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int searchType : 1; 
    }  _has;
    unsigned int  _maxResults;
    int  _searchType;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasSearchType;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) int searchType;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasSearchType;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end