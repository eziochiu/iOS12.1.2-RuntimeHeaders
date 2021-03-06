/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKOrderFeedRequest : NSObject {
    NSString * _feedID;
    unsigned long long  _maxOrder;
    unsigned long long  _minOrder;
    unsigned long long  _resultsLimit;
    unsigned long long  _topK;
}

@property (nonatomic, copy) NSString *feedID;
@property (nonatomic) unsigned long long maxOrder;
@property (nonatomic) unsigned long long minOrder;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) unsigned long long topK;

- (void).cxx_destruct;
- (id)description;
- (id)feedID;
- (id)init;
- (unsigned long long)maxOrder;
- (unsigned long long)minOrder;
- (unsigned long long)resultsLimit;
- (void)setFeedID:(id)arg1;
- (void)setMaxOrder:(unsigned long long)arg1;
- (void)setMinOrder:(unsigned long long)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setTopK:(unsigned long long)arg1;
- (unsigned long long)topK;

@end
