/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding> {
    bool  _activated;
    long long  _displayType;
    FBSDisplayLayoutElement * _element;
    Class  _elementClass;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayType;
@property (nonatomic, readonly, retain) FBSDisplayLayoutElement *element;
@property (nonatomic, readonly) Class elementClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void)activate;
- (void)activateWithBuilder:(id /* block */)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)displayType;
- (id)element;
- (Class)elementClass;
- (id)identifier;
- (id)initWithDisplayType:(long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateWithBuilder:(id /* block */)arg1;

@end