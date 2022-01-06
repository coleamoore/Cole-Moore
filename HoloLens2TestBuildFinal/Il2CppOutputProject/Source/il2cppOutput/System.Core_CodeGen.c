#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000025 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000027 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000028 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000030 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000031 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000032 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000049 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000053 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000054 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000055 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000056 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000057 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000058 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000059 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x0000005A TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005B System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000005C System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000005D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005E System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005F System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000063 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000064 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000065 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000066 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000068 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000069 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x0000006C System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x0000006D TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000071 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000073 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000074 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x00000075 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x00000076 TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000077 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000078 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000079 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007A System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007B System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000007C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007D System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000007E System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000007F System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000080 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000081 System.Void System.Linq.Set`1::Resize()
// 0x00000082 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000083 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000084 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000085 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000087 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000088 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000008B TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000008C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000008D System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000008E System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000008F System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000090 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000091 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000092 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000093 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000094 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000095 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000096 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000097 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000098 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000099 TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000009F System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000A1 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000A2 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000A3 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000A4 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000A5 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A6 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A9 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000B0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000B1 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B5 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B6 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[183] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[183] = 
{
	6991,
	6991,
	7254,
	7254,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6881,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[63] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 8 } },
	{ 0x0200000E, { 187, 12 } },
	{ 0x0200000F, { 199, 12 } },
	{ 0x02000010, { 211, 11 } },
	{ 0x02000011, { 222, 2 } },
	{ 0x02000013, { 224, 8 } },
	{ 0x02000015, { 232, 3 } },
	{ 0x02000016, { 237, 5 } },
	{ 0x02000017, { 242, 7 } },
	{ 0x02000018, { 249, 3 } },
	{ 0x02000019, { 252, 7 } },
	{ 0x0200001A, { 259, 4 } },
	{ 0x0200001B, { 263, 23 } },
	{ 0x0200001D, { 286, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 2 } },
	{ 0x0600000D, { 37, 1 } },
	{ 0x0600000E, { 38, 1 } },
	{ 0x0600000F, { 39, 2 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 5 } },
	{ 0x06000016, { 53, 3 } },
	{ 0x06000017, { 56, 2 } },
	{ 0x06000018, { 58, 4 } },
	{ 0x06000019, { 62, 4 } },
	{ 0x0600001A, { 66, 3 } },
	{ 0x0600001B, { 69, 4 } },
	{ 0x0600001C, { 73, 3 } },
	{ 0x0600001D, { 76, 3 } },
	{ 0x0600001E, { 79, 1 } },
	{ 0x0600001F, { 80, 1 } },
	{ 0x06000020, { 81, 3 } },
	{ 0x06000021, { 84, 3 } },
	{ 0x06000022, { 87, 2 } },
	{ 0x06000023, { 89, 2 } },
	{ 0x06000024, { 91, 5 } },
	{ 0x06000025, { 96, 3 } },
	{ 0x06000036, { 112, 2 } },
	{ 0x0600003B, { 121, 2 } },
	{ 0x06000040, { 133, 2 } },
	{ 0x06000046, { 146, 3 } },
	{ 0x0600004B, { 158, 3 } },
	{ 0x06000050, { 173, 3 } },
	{ 0x06000086, { 235, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[288] = 
{
	{ (Il2CppRGCTXDataType)2, 7092 },
	{ (Il2CppRGCTXDataType)3, 27849 },
	{ (Il2CppRGCTXDataType)2, 11308 },
	{ (Il2CppRGCTXDataType)2, 10535 },
	{ (Il2CppRGCTXDataType)3, 48313 },
	{ (Il2CppRGCTXDataType)2, 7807 },
	{ (Il2CppRGCTXDataType)2, 10569 },
	{ (Il2CppRGCTXDataType)3, 48374 },
	{ (Il2CppRGCTXDataType)2, 10547 },
	{ (Il2CppRGCTXDataType)3, 48334 },
	{ (Il2CppRGCTXDataType)2, 7093 },
	{ (Il2CppRGCTXDataType)3, 27850 },
	{ (Il2CppRGCTXDataType)2, 11339 },
	{ (Il2CppRGCTXDataType)2, 10581 },
	{ (Il2CppRGCTXDataType)3, 48395 },
	{ (Il2CppRGCTXDataType)2, 7832 },
	{ (Il2CppRGCTXDataType)2, 10617 },
	{ (Il2CppRGCTXDataType)3, 48671 },
	{ (Il2CppRGCTXDataType)2, 10599 },
	{ (Il2CppRGCTXDataType)3, 48521 },
	{ (Il2CppRGCTXDataType)2, 1218 },
	{ (Il2CppRGCTXDataType)3, 204 },
	{ (Il2CppRGCTXDataType)3, 205 },
	{ (Il2CppRGCTXDataType)2, 4066 },
	{ (Il2CppRGCTXDataType)3, 17541 },
	{ (Il2CppRGCTXDataType)2, 1219 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)2, 4080 },
	{ (Il2CppRGCTXDataType)3, 17549 },
	{ (Il2CppRGCTXDataType)3, 54145 },
	{ (Il2CppRGCTXDataType)2, 1267 },
	{ (Il2CppRGCTXDataType)3, 465 },
	{ (Il2CppRGCTXDataType)2, 8566 },
	{ (Il2CppRGCTXDataType)3, 38205 },
	{ (Il2CppRGCTXDataType)2, 8567 },
	{ (Il2CppRGCTXDataType)3, 38206 },
	{ (Il2CppRGCTXDataType)3, 23033 },
	{ (Il2CppRGCTXDataType)3, 54187 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)3, 497 },
	{ (Il2CppRGCTXDataType)3, 54084 },
	{ (Il2CppRGCTXDataType)2, 1254 },
	{ (Il2CppRGCTXDataType)3, 417 },
	{ (Il2CppRGCTXDataType)3, 54068 },
	{ (Il2CppRGCTXDataType)2, 1225 },
	{ (Il2CppRGCTXDataType)3, 318 },
	{ (Il2CppRGCTXDataType)3, 54134 },
	{ (Il2CppRGCTXDataType)3, 16234 },
	{ (Il2CppRGCTXDataType)2, 3839 },
	{ (Il2CppRGCTXDataType)2, 4610 },
	{ (Il2CppRGCTXDataType)2, 4951 },
	{ (Il2CppRGCTXDataType)2, 5206 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)3, 3571 },
	{ (Il2CppRGCTXDataType)3, 3572 },
	{ (Il2CppRGCTXDataType)2, 7808 },
	{ (Il2CppRGCTXDataType)3, 30101 },
	{ (Il2CppRGCTXDataType)2, 6131 },
	{ (Il2CppRGCTXDataType)2, 4371 },
	{ (Il2CppRGCTXDataType)2, 4624 },
	{ (Il2CppRGCTXDataType)2, 4953 },
	{ (Il2CppRGCTXDataType)2, 6132 },
	{ (Il2CppRGCTXDataType)2, 4372 },
	{ (Il2CppRGCTXDataType)2, 4625 },
	{ (Il2CppRGCTXDataType)2, 4954 },
	{ (Il2CppRGCTXDataType)2, 4626 },
	{ (Il2CppRGCTXDataType)2, 4955 },
	{ (Il2CppRGCTXDataType)3, 17542 },
	{ (Il2CppRGCTXDataType)2, 6133 },
	{ (Il2CppRGCTXDataType)2, 4373 },
	{ (Il2CppRGCTXDataType)2, 4627 },
	{ (Il2CppRGCTXDataType)2, 4956 },
	{ (Il2CppRGCTXDataType)2, 4628 },
	{ (Il2CppRGCTXDataType)2, 4957 },
	{ (Il2CppRGCTXDataType)3, 17543 },
	{ (Il2CppRGCTXDataType)2, 6130 },
	{ (Il2CppRGCTXDataType)2, 4623 },
	{ (Il2CppRGCTXDataType)2, 4952 },
	{ (Il2CppRGCTXDataType)2, 2837 },
	{ (Il2CppRGCTXDataType)2, 4605 },
	{ (Il2CppRGCTXDataType)2, 4606 },
	{ (Il2CppRGCTXDataType)2, 4949 },
	{ (Il2CppRGCTXDataType)3, 17540 },
	{ (Il2CppRGCTXDataType)2, 4604 },
	{ (Il2CppRGCTXDataType)2, 4948 },
	{ (Il2CppRGCTXDataType)3, 17539 },
	{ (Il2CppRGCTXDataType)2, 4370 },
	{ (Il2CppRGCTXDataType)2, 4622 },
	{ (Il2CppRGCTXDataType)2, 4369 },
	{ (Il2CppRGCTXDataType)3, 54038 },
	{ (Il2CppRGCTXDataType)3, 16233 },
	{ (Il2CppRGCTXDataType)2, 3838 },
	{ (Il2CppRGCTXDataType)2, 4608 },
	{ (Il2CppRGCTXDataType)2, 4950 },
	{ (Il2CppRGCTXDataType)2, 5205 },
	{ (Il2CppRGCTXDataType)2, 4652 },
	{ (Il2CppRGCTXDataType)2, 4963 },
	{ (Il2CppRGCTXDataType)3, 17857 },
	{ (Il2CppRGCTXDataType)3, 27851 },
	{ (Il2CppRGCTXDataType)3, 27853 },
	{ (Il2CppRGCTXDataType)2, 884 },
	{ (Il2CppRGCTXDataType)3, 27852 },
	{ (Il2CppRGCTXDataType)3, 27861 },
	{ (Il2CppRGCTXDataType)2, 7096 },
	{ (Il2CppRGCTXDataType)2, 10548 },
	{ (Il2CppRGCTXDataType)3, 48335 },
	{ (Il2CppRGCTXDataType)3, 27862 },
	{ (Il2CppRGCTXDataType)2, 4717 },
	{ (Il2CppRGCTXDataType)2, 5015 },
	{ (Il2CppRGCTXDataType)3, 17556 },
	{ (Il2CppRGCTXDataType)3, 53978 },
	{ (Il2CppRGCTXDataType)2, 10600 },
	{ (Il2CppRGCTXDataType)3, 48522 },
	{ (Il2CppRGCTXDataType)3, 27854 },
	{ (Il2CppRGCTXDataType)2, 7095 },
	{ (Il2CppRGCTXDataType)2, 10536 },
	{ (Il2CppRGCTXDataType)3, 48314 },
	{ (Il2CppRGCTXDataType)3, 17555 },
	{ (Il2CppRGCTXDataType)3, 27855 },
	{ (Il2CppRGCTXDataType)3, 53977 },
	{ (Il2CppRGCTXDataType)2, 10582 },
	{ (Il2CppRGCTXDataType)3, 48396 },
	{ (Il2CppRGCTXDataType)3, 27868 },
	{ (Il2CppRGCTXDataType)2, 7097 },
	{ (Il2CppRGCTXDataType)2, 10570 },
	{ (Il2CppRGCTXDataType)3, 48375 },
	{ (Il2CppRGCTXDataType)3, 30160 },
	{ (Il2CppRGCTXDataType)3, 14096 },
	{ (Il2CppRGCTXDataType)3, 17557 },
	{ (Il2CppRGCTXDataType)3, 14095 },
	{ (Il2CppRGCTXDataType)3, 27869 },
	{ (Il2CppRGCTXDataType)3, 53979 },
	{ (Il2CppRGCTXDataType)2, 10618 },
	{ (Il2CppRGCTXDataType)3, 48672 },
	{ (Il2CppRGCTXDataType)3, 27882 },
	{ (Il2CppRGCTXDataType)2, 7099 },
	{ (Il2CppRGCTXDataType)2, 10602 },
	{ (Il2CppRGCTXDataType)3, 48524 },
	{ (Il2CppRGCTXDataType)3, 27883 },
	{ (Il2CppRGCTXDataType)2, 4720 },
	{ (Il2CppRGCTXDataType)2, 5018 },
	{ (Il2CppRGCTXDataType)3, 17561 },
	{ (Il2CppRGCTXDataType)3, 17560 },
	{ (Il2CppRGCTXDataType)2, 10550 },
	{ (Il2CppRGCTXDataType)3, 48337 },
	{ (Il2CppRGCTXDataType)3, 53987 },
	{ (Il2CppRGCTXDataType)2, 10601 },
	{ (Il2CppRGCTXDataType)3, 48523 },
	{ (Il2CppRGCTXDataType)3, 27875 },
	{ (Il2CppRGCTXDataType)2, 7098 },
	{ (Il2CppRGCTXDataType)2, 10584 },
	{ (Il2CppRGCTXDataType)3, 48398 },
	{ (Il2CppRGCTXDataType)3, 17559 },
	{ (Il2CppRGCTXDataType)3, 17558 },
	{ (Il2CppRGCTXDataType)3, 27876 },
	{ (Il2CppRGCTXDataType)2, 10549 },
	{ (Il2CppRGCTXDataType)3, 48336 },
	{ (Il2CppRGCTXDataType)3, 53986 },
	{ (Il2CppRGCTXDataType)2, 10583 },
	{ (Il2CppRGCTXDataType)3, 48397 },
	{ (Il2CppRGCTXDataType)3, 27889 },
	{ (Il2CppRGCTXDataType)2, 7100 },
	{ (Il2CppRGCTXDataType)2, 10620 },
	{ (Il2CppRGCTXDataType)3, 48674 },
	{ (Il2CppRGCTXDataType)3, 30161 },
	{ (Il2CppRGCTXDataType)3, 14098 },
	{ (Il2CppRGCTXDataType)3, 17563 },
	{ (Il2CppRGCTXDataType)3, 17562 },
	{ (Il2CppRGCTXDataType)3, 14097 },
	{ (Il2CppRGCTXDataType)3, 27890 },
	{ (Il2CppRGCTXDataType)2, 10551 },
	{ (Il2CppRGCTXDataType)3, 48338 },
	{ (Il2CppRGCTXDataType)3, 53988 },
	{ (Il2CppRGCTXDataType)2, 10619 },
	{ (Il2CppRGCTXDataType)3, 48673 },
	{ (Il2CppRGCTXDataType)3, 17553 },
	{ (Il2CppRGCTXDataType)3, 17554 },
	{ (Il2CppRGCTXDataType)3, 17564 },
	{ (Il2CppRGCTXDataType)3, 467 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)2, 5009 },
	{ (Il2CppRGCTXDataType)3, 469 },
	{ (Il2CppRGCTXDataType)2, 880 },
	{ (Il2CppRGCTXDataType)2, 1268 },
	{ (Il2CppRGCTXDataType)3, 466 },
	{ (Il2CppRGCTXDataType)3, 468 },
	{ (Il2CppRGCTXDataType)3, 499 },
	{ (Il2CppRGCTXDataType)3, 500 },
	{ (Il2CppRGCTXDataType)2, 9699 },
	{ (Il2CppRGCTXDataType)3, 44179 },
	{ (Il2CppRGCTXDataType)2, 4712 },
	{ (Il2CppRGCTXDataType)2, 5011 },
	{ (Il2CppRGCTXDataType)3, 44180 },
	{ (Il2CppRGCTXDataType)3, 502 },
	{ (Il2CppRGCTXDataType)2, 882 },
	{ (Il2CppRGCTXDataType)2, 1272 },
	{ (Il2CppRGCTXDataType)3, 498 },
	{ (Il2CppRGCTXDataType)3, 501 },
	{ (Il2CppRGCTXDataType)3, 419 },
	{ (Il2CppRGCTXDataType)2, 9697 },
	{ (Il2CppRGCTXDataType)3, 44176 },
	{ (Il2CppRGCTXDataType)2, 4706 },
	{ (Il2CppRGCTXDataType)2, 5007 },
	{ (Il2CppRGCTXDataType)3, 44177 },
	{ (Il2CppRGCTXDataType)3, 44178 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)2, 878 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)3, 418 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)3, 320 },
	{ (Il2CppRGCTXDataType)2, 9695 },
	{ (Il2CppRGCTXDataType)3, 44174 },
	{ (Il2CppRGCTXDataType)2, 4703 },
	{ (Il2CppRGCTXDataType)2, 5005 },
	{ (Il2CppRGCTXDataType)3, 44175 },
	{ (Il2CppRGCTXDataType)3, 322 },
	{ (Il2CppRGCTXDataType)2, 876 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)3, 319 },
	{ (Il2CppRGCTXDataType)3, 321 },
	{ (Il2CppRGCTXDataType)2, 11356 },
	{ (Il2CppRGCTXDataType)2, 2838 },
	{ (Il2CppRGCTXDataType)3, 16274 },
	{ (Il2CppRGCTXDataType)2, 3855 },
	{ (Il2CppRGCTXDataType)2, 11800 },
	{ (Il2CppRGCTXDataType)3, 44171 },
	{ (Il2CppRGCTXDataType)3, 44172 },
	{ (Il2CppRGCTXDataType)2, 5223 },
	{ (Il2CppRGCTXDataType)3, 44173 },
	{ (Il2CppRGCTXDataType)2, 779 },
	{ (Il2CppRGCTXDataType)2, 1228 },
	{ (Il2CppRGCTXDataType)3, 332 },
	{ (Il2CppRGCTXDataType)3, 38180 },
	{ (Il2CppRGCTXDataType)2, 8568 },
	{ (Il2CppRGCTXDataType)3, 38207 },
	{ (Il2CppRGCTXDataType)2, 1640 },
	{ (Il2CppRGCTXDataType)3, 3573 },
	{ (Il2CppRGCTXDataType)3, 38186 },
	{ (Il2CppRGCTXDataType)3, 14034 },
	{ (Il2CppRGCTXDataType)2, 915 },
	{ (Il2CppRGCTXDataType)3, 38181 },
	{ (Il2CppRGCTXDataType)2, 8563 },
	{ (Il2CppRGCTXDataType)3, 4013 },
	{ (Il2CppRGCTXDataType)2, 1665 },
	{ (Il2CppRGCTXDataType)2, 3034 },
	{ (Il2CppRGCTXDataType)3, 14052 },
	{ (Il2CppRGCTXDataType)3, 38182 },
	{ (Il2CppRGCTXDataType)3, 14029 },
	{ (Il2CppRGCTXDataType)3, 14030 },
	{ (Il2CppRGCTXDataType)3, 14028 },
	{ (Il2CppRGCTXDataType)3, 14031 },
	{ (Il2CppRGCTXDataType)2, 3030 },
	{ (Il2CppRGCTXDataType)2, 11415 },
	{ (Il2CppRGCTXDataType)3, 17551 },
	{ (Il2CppRGCTXDataType)3, 14033 },
	{ (Il2CppRGCTXDataType)2, 4531 },
	{ (Il2CppRGCTXDataType)3, 14032 },
	{ (Il2CppRGCTXDataType)2, 4379 },
	{ (Il2CppRGCTXDataType)2, 11349 },
	{ (Il2CppRGCTXDataType)2, 4657 },
	{ (Il2CppRGCTXDataType)2, 4967 },
	{ (Il2CppRGCTXDataType)3, 16253 },
	{ (Il2CppRGCTXDataType)2, 3848 },
	{ (Il2CppRGCTXDataType)3, 18539 },
	{ (Il2CppRGCTXDataType)3, 18540 },
	{ (Il2CppRGCTXDataType)3, 18545 },
	{ (Il2CppRGCTXDataType)2, 5217 },
	{ (Il2CppRGCTXDataType)3, 18542 },
	{ (Il2CppRGCTXDataType)3, 55250 },
	{ (Il2CppRGCTXDataType)2, 3038 },
	{ (Il2CppRGCTXDataType)3, 14085 },
	{ (Il2CppRGCTXDataType)1, 4522 },
	{ (Il2CppRGCTXDataType)2, 11362 },
	{ (Il2CppRGCTXDataType)3, 18541 },
	{ (Il2CppRGCTXDataType)1, 11362 },
	{ (Il2CppRGCTXDataType)1, 5217 },
	{ (Il2CppRGCTXDataType)2, 11798 },
	{ (Il2CppRGCTXDataType)2, 11362 },
	{ (Il2CppRGCTXDataType)2, 4664 },
	{ (Il2CppRGCTXDataType)2, 4972 },
	{ (Il2CppRGCTXDataType)3, 18546 },
	{ (Il2CppRGCTXDataType)3, 18544 },
	{ (Il2CppRGCTXDataType)3, 18543 },
	{ (Il2CppRGCTXDataType)2, 659 },
	{ (Il2CppRGCTXDataType)3, 14099 },
	{ (Il2CppRGCTXDataType)2, 893 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	183,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	63,
	s_rgctxIndices,
	288,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
