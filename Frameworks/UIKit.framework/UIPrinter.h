/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinter : NSObject {
    NSURL * URL;
    id  _printerInfo;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *displayLocation;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) long long supportedJobTypes;
@property (readonly) bool supportsColor;
@property (readonly) bool supportsDuplex;

+ (id)printerWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithPrinter:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_internalPrinter;
- (void)contactPrinter:(id /* block */)arg1;
- (id)displayLocation;
- (id)displayName;
- (id)init;
- (id)makeAndModel;
- (long long)supportedJobTypes;
- (bool)supportsColor;
- (bool)supportsDuplex;

@end
