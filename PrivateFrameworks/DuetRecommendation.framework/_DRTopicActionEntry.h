/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRTopicActionEntry : NSObject {
    unsigned long long  _action;
    NSString * _topic;
    NSDate * _when;
}

@property (readonly) unsigned long long action;
@property (readonly, retain) NSString *topic;
@property (readonly, retain) NSDate *when;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)description;
- (id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3;
- (id)topic;
- (id)when;

@end
