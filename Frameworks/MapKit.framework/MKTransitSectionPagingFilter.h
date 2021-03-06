/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitSectionPagingFilter : NSObject {
    bool  _limitNumLines;
    unsigned long long  _numLinesFallbackThreshold;
    unsigned long long  _numLinesFallbackValue;
}

@property (nonatomic) bool limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;

- (bool)limitNumLines;
- (unsigned long long)numLinesFallbackThreshold;
- (unsigned long long)numLinesFallbackValue;
- (void)setLimitNumLines:(bool)arg1;
- (void)setNumLinesFallbackThreshold:(unsigned long long)arg1;
- (void)setNumLinesFallbackValue:(unsigned long long)arg1;

@end
