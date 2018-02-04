/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKLayerHostView : UIView

@property (nonatomic) unsigned int contextID;

+ (Class)layerClass;

- (unsigned int)contextID;
- (id)layerHost;
- (void)setContextID:(unsigned int)arg1;

@end
