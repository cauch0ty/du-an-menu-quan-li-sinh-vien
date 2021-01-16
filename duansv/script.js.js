function duansv1()
{
	var ten = document.getElementById('ten').value;
	var lop = document.getElementById('lop').value;
	var quequan = document.getElementById('quequan').value;
	var ngaysinh = document.getElementById('ngaysinh').value;
	var diachi = document.getElementById('diachi').value;
	var masv = document.getElementById('masv').value;
	var dmh1 = document.getElementById('dmh1').value;
	var dmh2 = document.getElementById('dmh2').value;
	var dmh3 = document.getElementById('dmh3').value;
	var gioitinh = '';
	if (document.getElementById('nam').checked) {
		gioitinh = document.getElementById('nam').value;
	}
	else if (document.getElementById('nu').checked) {
		gioitinh = document.getElementById('nu').value;
	}

if(_.isEmpty(ten)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(lop)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(quequan)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(diachi)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(ngaysinh)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(masv)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
	if(_.isEmpty(gioitinh)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
		if(_.isEmpty(dmh1)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
		if(_.isEmpty(dmh2)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}
		if(_.isEmpty(dmh3)){
		document.getElementById('canhbao').innerHTML = ''
	} else{document.getElementById('canhbao').innerHTML = ''}

	if(masv && ten && lop && quequan && ngaysinh && diachi && gioitinh && dmh1 && dmh2 && dmh3)
	{
		console.log(masv, ten, lop, quequan, ngaysinh, diachi, gioitinh, dmh1, dmh2, dmh3)
	}

	var sinhvien = localStorage.getItem('sinhvien') ? JSON.parse(localStorage.getItem('sinhvien')) : [];
	sinhvien.push({
		masv: masv,
		ten: ten,
		lop: lop,
		quequan: quequan,
		ngaysinh: ngaysinh,
		diachi: diachi,
		gioitinh: gioitinh,
		dmh1: dmh1,
		dmh2: dmh2,
		dmh3: dmh3,
	});
	localStorage.setItem('sinhvien', JSON.stringify(sinhvien));

	this.duansv2();
}
function duansv2(){
		var sinhvien = localStorage.getItem('sinhvien') ? JSON.parse(localStorage.getItem('sinhvien')) : [];
		if(sinhvien.length === 0) {
			document.getElementById('acc1').style.display = 'none';
			return false;
		}
		document.getElementById('acc1').style.display = 'block';
	var bang = `
	<tr>
		<td >STT</td>
		<td >Mã sinh viên</td>
		<td >Họ và tên</td>
		<td >Lớp</td>
		<td >Quê quán</td>
		<td >Ngày sinh</td>
		<td >Địa chỉ</td>
		<td >Giới Tính</td>
		<td >Điểm môn học 1</td>
		<td >Điểm môn học 2</td>
		<td >Điểm môn học 3</td>
		<td >Khác</td>

	</tr>
	`;
	sinhvien.forEach((student, index) =>{
		var sinhvienid = index;
		index++;
		bang += `
		<tr>
		<td >${index}</td>
		<td >${student.masv}</td>
		<td >${student.ten}</td>
		<td >${student.lop}</td>
		<td >${student.quequan}</td>
		<td >${student.ngaysinh}</td>
		<td >${student.diachi}</td>
		<td >${student.gioitinh}</td>
		<td >${student.dmh1}</td>
		<td >${student.dmh2}</td>
		<td >${student.dmh3}</td>
		<td>
		<a href='#' onclick='xoasv(${sinhvienid})'>xoá</a>
		</td>
	</tr> 
		`;
	})
	document.getElementById('abc').innerHTML = bang;
	}
function xoasv(id)
{
	var sinhvien = localStorage.getItem('sinhvien') ? JSON.parse(localStorage.getItem('sinhvien')) : [];
	sinhvien.splice(id, 1);
	localStorage.setItem('sinhvien', JSON.stringify(sinhvien));
	 duansv2()
}
