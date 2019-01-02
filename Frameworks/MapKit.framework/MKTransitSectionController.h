/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitSectionController : NSObject {
    MKTransitSectionPagingFilter * __pagingFilter;
    NSDate * _departureCutoffDate;
    NSDate * _expiredHighFrequencyCutoffDate;
    NSSet * _incidentEntitiesToExclude;
    NSSet * _linesToShow;
    MKMapItem * _mapItem;
    bool  _needsBuildRows;
    unsigned long long  _numberOfFilteredLines;
    unsigned long long  _numberOfFilteredRows;
    unsigned long long  _numberOfRows;
    <GEOTransitSystem> * _system;
}

@property (nonatomic, readonly) MKTransitSectionPagingFilter *_pagingFilter;
@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (nonatomic, retain) NSDate *expiredHighFrequencyCutoffDate;
@property (nonatomic, retain) NSSet *incidentEntitiesToExclude;
@property (nonatomic, readonly) unsigned long long numberOfFilteredLines;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

- (void).cxx_destruct;
- (void)_buildRows;
- (bool)_needsBuildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)departureCutoffDate;
- (id)expiredHighFrequencyCutoffDate;
- (bool)hasFilteredLines;
- (bool)hasFilteredRows;
- (id)incidentEntitiesToExclude;
- (void)incrementPagingFilter;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)linesToShow;
- (unsigned long long)numberOfFilteredLines;
- (unsigned long long)numberOfRows;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setExpiredHighFrequencyCutoffDate:(id)arg1;
- (void)setIncidentEntitiesToExclude:(id)arg1;
- (id)system;

@end