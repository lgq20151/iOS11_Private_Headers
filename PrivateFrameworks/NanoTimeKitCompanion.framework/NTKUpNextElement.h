/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElement : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NTKUpNextElementContent * _content;
    NTKUpNextElementAction * _defaultAction;
    NTKUpNextElementContent * _idealizedContent;
    NSString * _identifier;
    unsigned long long  _interaction;
    NTKUpNextElementContent * _lockedContent;
    unsigned long long  _privacyBehavior;
    NSArray * _relevanceProviders;
}

@property (nonatomic, readonly) NTKUpNextElementContent *content;
@property (nonatomic, readonly) NTKUpNextElementAction *defaultAction;
@property (nonatomic, readonly) NTKUpNextElementContent *idealizedContent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long interaction;
@property (nonatomic, readonly) NTKUpNextElementContent *lockedContent;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)content;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAction;
- (id)description;
- (unsigned long long)hash;
- (id)idealizedContent;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 lockedContent:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7 lockedContent:(id)arg8;
- (unsigned long long)interaction;
- (bool)isEqual:(id)arg1;
- (bool)isNoContentElement;
- (id)lockedContent;
- (unsigned long long)privacyBehavior;
- (id)relevanceProviders;
- (void)setBundleIdentifier:(id)arg1;

@end
