/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {
    NSObject<OS_dispatch_queue> * _documentComponentReadQueue;
    TSPPackage * _documentPackage;
}

- (void).cxx_destruct;
- (bool)endReading;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(bool)arg5 skipDocumentUpgrade:(bool)arg6;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(bool)arg5 skipDocumentUpgrade:(bool)arg6 documentPackage:(id)arg7;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;

@end