/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderRegistrationInfoList : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _estimatedDisplayedSize;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _items;
    NSString * _suggestedName;
}

@property (nonatomic) struct CGSize { double x1; double x2; } estimatedDisplayedSize;
@property (nonatomic, retain) NSString *suggestedName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)addRepresentingObject:(id)arg1;
- (void)enumerateItems:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })estimatedDisplayedSize;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)setEstimatedDisplayedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSuggestedName:(id)arg1;
- (id)suggestedName;

@end
