/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying> {
    NSString * _input;
    NSString * _secureContent;
    NSString * _secureFormattedContent;
    NSString * _secureHeader;
    NSString * _truncationSentinel;
}

@property (nonatomic, readonly, retain) NSString *input;
@property (nonatomic, readonly, retain) NSString *secureContent;
@property (nonatomic, readonly, retain) NSString *secureFormattedContent;
@property (nonatomic, readonly, retain) NSString *secureHeader;
@property (nonatomic, readonly, retain) NSString *truncationSentinel;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)secureContent;
- (id)secureFormattedContent;
- (id)secureHeader;
- (id)truncationSentinel;

@end
