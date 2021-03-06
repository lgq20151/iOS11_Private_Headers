/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProcessor : NSObject {
    NSMutableArray * mObjects;
    EDResources * mResources;
    EDWorkbook * mWorkbook;
}

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)applyProcessorWithSheet:(id)arg1;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;
- (bool)isObjectSupported:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;

@end
