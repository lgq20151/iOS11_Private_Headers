/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRFeatureResult : NSObject {
    unsigned long long  _action;
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long count;

- (unsigned long long)action;
- (unsigned long long)count;
- (void)setAction:(unsigned long long)arg1;
- (void)setCount:(unsigned long long)arg1;

@end
