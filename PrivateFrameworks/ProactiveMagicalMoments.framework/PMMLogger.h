/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMLogger : NSObject {
    NSDictionary * _logChannels;
}

@property (nonatomic, retain) NSDictionary *logChannels;

+ (id)logFacilities;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)logChannelForFacility:(id)arg1;
- (id)logChannels;
- (void)setLogChannels:(id)arg1;

@end
