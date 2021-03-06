/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerDescriptor : NSObject {
    bool  _applicationIsFullscreen;
    bool  _hasContentViewController;
    bool  _hasMessage;
    bool  _hasTitle;
    long long  _numberOfActions;
}

@property bool applicationIsFullscreen;
@property bool hasContentViewController;
@property bool hasMessage;
@property bool hasTitle;
@property long long numberOfActions;

- (bool)applicationIsFullscreen;
- (bool)hasContentViewController;
- (bool)hasMessage;
- (bool)hasTitle;
- (bool)isEqual:(id)arg1;
- (long long)numberOfActions;
- (void)setApplicationIsFullscreen:(bool)arg1;
- (void)setHasContentViewController:(bool)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setHasTitle:(bool)arg1;
- (void)setNumberOfActions:(long long)arg1;

@end
