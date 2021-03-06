/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSpringBoardActionHandlerHolder : NSObject {
    id /* block */  _handler;
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)identifier;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
