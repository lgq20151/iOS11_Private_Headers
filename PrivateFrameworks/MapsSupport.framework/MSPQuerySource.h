/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {
    id /* block */  _mappingBlock;
    NSHashTable * _observers;
    MSPContainer * _owningContainer;
    MSPQuerySource * _parentSource;
    id /* block */  _preprocessingBlock;
    _MSPQueryState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_container;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (void)_didReceiveContainerContents:(id)arg1 context:(id)arg2;
- (id)_initWithOwningContainer:(id)arg1;
- (id)_initWithParentSource:(id)arg1 preprocessingBlock:(id /* block */)arg2 mappingBlock:(id /* block */)arg3;
- (void)_removeObserver:(id)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (id)newEditableQuery;
- (id)newQuery;
- (id)sourceByMappingContentsUsingBlock:(id /* block */)arg1;
- (id)sourceByMappingContentsUsingPreprocessingBlock:(id /* block */)arg1 mappingBlock:(id /* block */)arg2;

@end