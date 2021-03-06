/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLocaleDataSource : NSObject {
    NSString * _language;
    NSMutableArray * _moreCountries;
    NSMutableArray * _suggestedCountries;
}

@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSMutableArray *moreCountries;
@property (nonatomic, retain) NSMutableArray *suggestedCountries;

+ (id)newWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)language;
- (id)moreCountries;
- (unsigned long long)numberOfOtherLocales;
- (unsigned long long)numberOfRecommendedLocales;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)setLanguage:(id)arg1;
- (void)setMoreCountries:(id)arg1;
- (void)setSuggestedCountries:(id)arg1;
- (id)suggestedCountries;

@end
