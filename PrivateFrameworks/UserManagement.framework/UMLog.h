/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMLog : NSObject {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (id)debug;
+ (id)error;
+ (id)fault;
+ (id)info;
+ (id)standard;

- (void)logMessage:(id)arg1;
- (void)logPrivateFormat:(id)arg1;
- (void)logPublicFormat:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
