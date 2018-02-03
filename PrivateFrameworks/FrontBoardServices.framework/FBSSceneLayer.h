/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneLayer : NSObject <BSXPCCoding> {
    long long  _alignment;
    CAContext * _context;
    <FBSSceneLayerDelegate> * _delegate;
    unsigned int  _identifier;
    double  _level;
    FBSScene * _scene;
    bool  _shouldObserveUpdates;
}

@property (nonatomic) long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSSceneLayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double level;
@property (nonatomic) FBSScene *scene;
@property (nonatomic, readonly) bool shouldObserveUpdates;
@property (readonly) Class superclass;

- (id)_initWithLevel:(double)arg1 context:(id)arg2;
- (void)_setLevel:(double)arg1 fromObserver:(bool)arg2;
- (void)_synchronize:(id /* block */)arg1;
- (void)_updateProperties;
- (long long)alignment;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isCAContextLayer;
- (bool)isExternalSceneLayer;
- (double)level;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)scene;
- (void)setAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLevel:(double)arg1;
- (void)setScene:(id)arg1;
- (bool)shouldObserveUpdates;

@end
