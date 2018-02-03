/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatisticsScalarHistogram : NSObject {
    NSString * _baseKey;
    NSArray * _bucketKeys;
    NSMutableSet * _children;
    long long  _recordCount;
    long long  _values;
}

- (void).cxx_destruct;
- (void)_addChildStatistic:(id)arg1;
- (void)clearValues;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;
- (void)recordValue:(double)arg1;
- (void)reportValues;

@end
