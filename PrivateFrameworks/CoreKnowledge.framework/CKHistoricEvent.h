/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding> {
    void _firstSeen;
    void _frequency;
    void _lastDuration;
    void _lastSeen;
    void _metadata;
    void _totalDuration;
    void identifier;
}

@property (nonatomic, copy) NSDate *_firstSeen;
@property (nonatomic) long long _frequency;
@property (nonatomic) double _lastDuration;
@property (nonatomic, copy) NSDate *_lastSeen;
@property (nonatomic, copy) NSDictionary *_metadata;
@property (nonatomic) double _totalDuration;
@property (nonatomic, readonly) NSDate *firstSeen;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double lastDuration;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) double totalDuration;

+ (id)EventIdSeparator;
+ (id)dateFormat;
+ (id)identifierWithPrefix:(id)arg1 intent:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)_firstSeen;
- (long long)_frequency;
- (double)_lastDuration;
- (id)_lastSeen;
- (id)_metadata;
- (double)_totalDuration;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firstSeen;
- (long long)frequency;
- (id)identifier;
- (id)init;
- (id)init:(id)arg1;
- (id)initFrom:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 firstSeen:(id)arg2 lastSeen:(id)arg3 frequency:(long long)arg4 lastDuration:(double)arg5 totalDuration:(double)arg6 metadata:(id)arg7;
- (double)lastDuration;
- (id)lastSeen;
- (id)metadata;
- (void)set_firstSeen:(id)arg1;
- (void)set_frequency:(long long)arg1;
- (void)set_lastDuration:(double)arg1;
- (void)set_lastSeen:(id)arg1;
- (void)set_metadata:(id)arg1;
- (void)set_totalDuration:(double)arg1;
- (double)totalDuration;

@end
